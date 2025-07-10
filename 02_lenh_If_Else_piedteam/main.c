#include <stdio.h>
#include <stdlib.h>

// 02_if else
// cấu trúc phân nhánh
// tab canh le dong
// if (....) true {..} ( sẽ xảy ra ) else if (...) {...} ( nếu ko thì )

int main()
{
    /*
    if(conditional){
        command block;
    }else if(conditional){
        command block;
    }
    */
    int car = 5;
    printf ( "\n Sai gon ");
    printf ( "\n Cao toc lien khuonng" );
    // gap 1 bien bao
    // Code chay tu ten xuong duoi , nen khi chay ham if nếu thoả một điều kiện
    //  trên thì sẽ loại hết điều kiện dưới, hàm chỉ 1 if nhưng nhiều else if và 1 else
    if ( car >= 7 ){
        printf( "\n pren" );
    } else if ( car == 7 ){
        printf( "\n sacom" );
    } else{
        printf( "\n mimosa" );
    }
    printf ( "\n Da Lat" );
    // nói riêng về điều kiện
    // comparision opertator: toán tử điều kiện
    // == so sánh bằng
    // != so sánh không bằng
    // > < >= <=
    // Mathetic operator: toán tử toán học
    // + - * / %
    // *( % chia lấy phần dư [mod] ) vd: 7 / 2 dư 1 lấy 1
    // toán tử tăng
    int a = 5;
    a = a + 2;//7
    a += 2; //9
    a = a + 1;//10
    a += 1; //11
    a ++;//12
    a += 3;//15
    a = a + 3;//18
    a --;//17

    // II - logical operator: toán tử logic
    // muốn đi bar thì cần gì
    // tuổi từ 18t trở lên
    // money trên 300k

    int age = 18;
    int money = 301;
    /*
    if ( age >= 18 ){
        if ( money > 300 ){
            printf ( "\n Welcome " );
        }else{
        printf ("\n Cutt ");
        }
    }else{
        printf ("\n Cutt ");
    }
    */
    if ( age >= 18 && money > 300 ){
        printf ( "\n Welcome " );
     }else{
        printf ( "\n Cutt " );
     }

    // &&:and: tìm false, thấy false là chốt false
    //          không tìm được thì true
    // ||:or : tìm true, thấy true là chốt true
    //          không tìm được thì false
    a = 10;
    int b = 3;
    if ( a == 10 && b++ > 2) {
        printf ( "\n True a = %d, b = %d", a, b  );
    }else{
        printf ( "\n False a = %d, b = %d", a, b  );
    }
    return 0;
}

// Làm btap 04_05 xin mentor

