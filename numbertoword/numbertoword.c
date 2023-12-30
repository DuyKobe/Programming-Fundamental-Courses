#include<stdio.h>

/*Viết một chương trình dịch từ số sang chữ.

Ví dụ 
Input: 123456

Output: Một trăm hai mươi ba nghìn bốn trăm năm mươi sáu
*/

    char *mot[] ={"","một", "hai","ba","bốn","năm","sáu", "bảy","tám","chín"};
    char *chuc[] ={"","mười","hai mươi","ba mươi","bốn mươi","năm mươi","sáu mươi","bảy mươi","tám mươi","chín mươi"};
    char *muoi[] ={"mười","mười một","mười hai","mười ba","mười bốn","mười lăm","mười sáu","mười bảy","mười tám","mười chín"};
    void xuly(int a, int b, int c){
        if (a >0)
        {
            printf(" %s trăm", mot[a]);
        } 
        if(b ==1)
        {
            printf(" %s", muoi[c]);
        }
        if(b>1)
        {
            printf(" %s", chuc[b]);
            if(c==5)
            {
                printf(" lăm");
            }else{
                printf(" %s",mot[c]);
            }
        }
        if(b ==0)
        {
            if (a==0){
                printf(" %s",mot[c]); 
            }if(a>0&&c>0){
                printf(" linh");
                printf(" %s",mot[c]);
            }
        }         
    }
//fucntion xu ly cho hang tram, hang chuc, hang don vi khi n>999
    void xuly_1(int a, int b, int c){
        if (a >0)
        {
            printf(" %s trăm", mot[a]);
        } if(b ==1)
        {
            printf(" %s", muoi[c]);
        }if (b>1)
        {
            printf(" %s", chuc[b]);
            if(c==5)
            {
                printf(" lăm");
            }else{
                printf(" %s",mot[c]);
            }
        }
        if (b ==0 )
        {
            printf(" linh");
            printf(" %s",mot[c]);     
        }
    }      

    void NumbertoWord(long long n){
        if(n<0 || n>999999999999LL ){
            printf("Số không hợp lệ");
                return;
        } if (n==0){
                printf("Không\n");
        } else {
            int  hang_tram_ti =(int) (n /100000000000);
            int  hang_chuc_ti =(int) ((n%100000000000)/10000000000);
            int  hang_ti =(int)((n%10000000000) /1000000000);
            int  hang_tram_trieu =(int) ((n %1000000000)/100000000);
            int  hang_chuc_trieu =(int) ((n%100000000)/10000000);
            int  hang_trieu = (int)((n%10000000) /1000000);
            int  hang_tram_nghin =(int) ((n %1000000)/100000);
            int  hang_chuc_nghin =(int) ((n%100000)/10000);
            int  hang_nghin =(int) ((n%10000) /1000);
            int  hang_tram = (int)((n%1000)/100);
            int  hang_chuc = (int)((n%100)/10);
            int  hang_donvi =(int) (n%10);
            if(hang_ti>0 ||hang_chuc_ti>0||hang_tram_ti>0 ){
                xuly(hang_tram_ti, hang_chuc_ti, hang_ti);
                printf(" tỉ");
            }
            if(hang_trieu>0 ||hang_chuc_trieu>0||hang_tram_trieu>0 ){
                xuly(hang_tram_trieu, hang_chuc_trieu, hang_trieu);
                printf(" triệu");
            }
            if (hang_nghin >0||hang_chuc_nghin>0||hang_tram_nghin>0){
                xuly(hang_tram_nghin, hang_chuc_nghin, hang_nghin);
                printf(" nghìn");
            }if(hang_donvi>0|| hang_chuc>0|| hang_tram>0 ) {
                if(hang_ti>0 ||hang_chuc_ti>0||hang_tram_ti>0
                ||hang_trieu>0 ||hang_chuc_trieu>0||hang_tram_trieu>0
                ||hang_nghin >0||hang_chuc_nghin>0||hang_tram_nghin>0)
                {
                    xuly_1(hang_tram, hang_chuc, hang_donvi );
                }else {
                    xuly(hang_tram, hang_chuc, hang_donvi );    
                }
            }
            if (n==0){
                printf("Không");
            }
        }
    }

    int main(){
        long long a; 

        printf("Nhập giá trị của a: ");
        scanf("%lld", &a);
        
        NumbertoWord(a);
            
        return 0;
    }