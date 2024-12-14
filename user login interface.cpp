#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[]){
        // 预设用户名和密码
        const char* correct_username = "Astral";
        const char* correct_password = "123456";
        // 检查输入格式是否合规
        if(argc != 3){ 
                printf("使用方法: %s <用户名> <密码>\n",argv[0]);
                printf("错误代码:1\n");
                return 1;
        }
        // 获取命令行用户名和密码
        const char* input_username = argv[1];
        const char* input_password = argv[2];
        // 检查用户名和密码是否正确
        if(strcmp(correct_username,input_username) == 0 && strcmp(correct_password,input_password) == 0){
                printf("登陆成功\n");
        }else{
                printf("登陆失败,用户名或密码错误\n");
        }
        return 0;
}
