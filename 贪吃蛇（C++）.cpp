#include"snake_start.h"  
#include"logo.h"
#include"snake_printer.h"
#include"snake_if.h"

 
  
/**主函数**/  
int main(){  
    print_logo();  
    int hard;  
    locate(17,40);  
    cin>>hard;  
    if(hard<1||hard>100){  
        cout<<"游戏难度不得小于1不得大于100，请重新开始游戏"<<endl;  
        system("pause");  
        return 0;  
    }  
    snake_length=5;  
    for(int i=0;i<5;i++){  
        snake[i].x=1;  
        snake[i].y=5-i;  
    }  
    dir=3;  
    system("cls");  
    hide();  
    print_wall(60,20);  
    print_food();  
    print_snake();  
    locate(3,62);  
    cout<<"当前长度：";  
  
    clock_t a,b;  
    char ch;  
    double hard_len;  
  
    /**开始游戏*/  
    while(1){  
        hard_len=(double)snake_length/(double)(60*20);  
        a=clock();  
        while(1){  
            b=clock();  
            if(b-a>=(int)(400-30*hard)*(1-sqrt(hard_len))){  
                break;  
            }  
        }  
        /**键入上下左右*/  
        if(kbhit()){  
            ch=getch();  
            if(ch==-32){  
                ch=getch();  
                switch(ch){  
                case 72://上  
                    if(dir==2||dir==3){  
                        dir=0;  
                    }  
                    break;  
                case 80:  
                    if(dir==2||dir==3){  
                        dir=1;  
                    }  
                    break;  
                case 75:  
                    if(dir==0||dir==1){  
                        dir=2;  
                    }  
                    break;  
                case 77:  
                    if(dir==0||dir==1){  
                        dir=3;  
                    }  
                    break;  
                }  
            }  
        }  
        if(!go_ahead()){  
            break;  
        }  
        locate (3,73);  
        cout<<snake_length<<endl;  
    }  
    system("pause");  
    return 0;  
}  