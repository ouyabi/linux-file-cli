#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[]){
        // Ԥ���û���������
        const char* correct_username = "Astral";
        const char* correct_password = "123456";
        // ��������ʽ�Ƿ�Ϲ�
        if(argc != 3){ 
                printf("ʹ�÷���: %s <�û���> <����>\n",argv[0]);
                printf("�������:1\n");
                return 1;
        }
        // ��ȡ�������û���������
        const char* input_username = argv[1];
        const char* input_password = argv[2];
        // ����û����������Ƿ���ȷ
        if(strcmp(correct_username,input_username) == 0 && strcmp(correct_password,input_password) == 0){
                printf("��½�ɹ�\n");
        }else{
                printf("��½ʧ��,�û������������\n");
        }
        return 0;
}
