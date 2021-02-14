#include <stdio.h>
#include <memory.h>
#define MAX_LEN 1000
int nume; //numerator����
int deno; //denominator��ĸ
int quot[MAX_LEN]; //quotient��
int rem[MAX_LEN]; //remainder����bai
int negative_flag; //������־
void save_quot_rem() //��ȡ�̺�����
{
    int i;
    negative_flag = nume/(double)deno < 0 ? 1 : 0; //���Ǹ������־Ϊ1
    nume = nume < 0 ? -nume : nume; //���Ǹ�����ת��Ϊ����,��ͬ
    deno = deno < 0 ? -deno : deno;
    for(i=0; i<MAX_LEN; i++)
    {
        quot[i] = nume/deno;
        rem[i] = nume%deno;
        nume = 10*rem[i];
        if(!rem[i])
            break;
    } //for
}
//�ж��Ƿ���ѭ��С��,�����򱣴�ѭ������ʼ�ͽ���λ��
int is_circu(int *start, int *end)
{
    int i, j;
    for(i=0; i<MAX_LEN; i++)
    {
        if(-1 == rem[i])
            return 0;
    }
    for(i=0; i<MAX_LEN; i++)
    {
        for(j=i+1; j<MAX_LEN; j++)
        {
            if(rem[i] == rem[j])
            {
                *start = i;
                *end = j;
                return 1;
            } //if
        } //for
    } //for
    return 0;
}
void show_circu(int start, int end) //��ʾѭ��С��
{
    int i;
    printf(negative_flag ? "-%d." : "%d.", quot[0]); //��������
    for(i=1; i<=start; i++) //С����ѭ���ڲ���
    {
        printf("%d", quot[i]);
    }
    printf("(");
    for(i=start+1; i<=end; i++) //С��ѭ���ڲ���
    {
        printf("%d", quot[i]);
    }
    printf(")\n\n");
}
void show_not_circu() //��ʾ��ѭ��С��
{
    int i;
    if(-1 == quot[1]) //��С������
    {
        printf(negative_flag ? "-%d" : "%d", quot[0]);
        printf("\n\n");
        return;
    }
    printf(negative_flag ? "-%d." : "%d.", quot[0]);
    for(i=1; (i < MAX_LEN) && (-1 != quot[i]); i++) //С������
    {
        printf("%d", quot[i]);
    }
    printf("\n\n");
}
int main()
{
    int start, end;
    printf("��������Ӻͷ�ĸ,�ÿո�ֿ�(��������0�˳�):\n");
    while(1)
    {
        fflush(stdin);
        scanf("%d%d", &nume, &deno);
        if(!nume && !deno)
            return 0;
        memset(quot, -1, sizeof(quot));
        memset(rem, -1, sizeof(rem));
        if(!deno)
        {
            printf("��������Ϊ0,����������:\n");
            continue;
        }
        save_quot_rem();
        is_circu(&start, &end) ? show_circu(start, end) : show_not_circu();
    }
    return 0;
}