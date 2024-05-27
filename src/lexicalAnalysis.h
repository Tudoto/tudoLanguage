#include<iostream>

class tokens {
    public:
        void getTokens() {
            FILE * fp = fopen("test_token.txt", "r");
            if(fp == nullptr) {
                printf("failed to open the file, please check!\n");
            }
            char ch;
            int num = 0;
            while((ch = getc(fp)) != EOF) {
                if(ch == ' ' || ch == '\n') {
                    if(state == NUM) {
                        printf("token NUM: %d\n",num);
                        state = INIT;
                        num = 0;
                    }
                } else if (ch >= '0' && ch <='9') {
                        state = NUM;
                        num = num * 10 + ch - '0'; 
                } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/'){
                    if (state == NUM) {
                        printf("token NUM: %d\n",num);
                        state = INIT;
                        num = 0;
                    }
                    printf("token OP:%c\n",ch);
                } else {
                    printf("illegal input\n");
                }
            }
            if(num != 0) {
                printf("token NUM: %d\n",num);
            }

            fclose(fp);
}

    private:
        enum states {
            INIT = 0,
            NUM,
            OP,
        };
        states state;
};


