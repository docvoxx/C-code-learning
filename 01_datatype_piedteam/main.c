#include <stdio.h>
#include <stdlib.h>

// Note: ghi chu
/*
cntt: xu ly thong tin bang cong nghe
  luu tru -> xu Ly -> bao cao (report)
datatype: kieu du lieu
  ky tu      char    character   1byte 'a', '2' , 'diep' -> 'p' do du lieu 1 byte
  so nguyen  int     integer     4byte  9 , 1999 , 17.9 -> 17 lay so nguyen
  so thuc    float   float       4byte  9 , 1999 , 17.9 -> 17.9 lay so thuc
  so thuc    double  long float  8byte  9 , 17.9 , 12312141241.1231244
*/

// C la ngon ngu huong thu tuc
//     procedure: tuan tu    sequence: dong chay
// Dau nhac he args
int main()
{
    //luu tru
    //luu ky tu dau tien trong ten cua minh
    // 1. xac dinh kieu: char
    // 2. xac dinh ten: dat ten cho co nghia
    //    cammelCase: cu phap con lac da
    //    khong ky tu dac biet (tru $ _)
    //    khong co so o dau
    //    phai la danh tu
    //    = phep gan | assignment
    // Mot bien co 2 thu + value + adress
    // Tao vi|ly|bien de luu
    char   firstCharOfName = 'l';
    // Luu tuoi cua minh
    int    ageOfMine       = 18;
    // Luu diem toan vua roi
    float  mathPoint       = 8.8;
    double score           = 9.812;

    // xem da luu duoc gi
    // print format: in theo dinh dang, theo chuan
    printf("Anh Lan dep trai hai lai sau muoi");
    // in ra ky tu dau tien trong ten cua minh
    printf ("\nKy tu dau tien la %c",firstCharOfName);
    // "\n" xuong dong hang , "%c" la tim kiem bien char (c)
    // In ra tuoi cua minh: In ra gia tri cua age
    printf ("\nTuoi cua minh la %i",ageOfMine);
    printf ("\nTuoi cua minh la %d",ageOfMine); // d: decimal
    // In ra diem: mathPoint
    printf ("\nDiem minh la %.2f",mathPoint);
    // ".2f" lay 2 gia tri sau dau cham float
    // In ra score
    printf ("\nScore la %lf",score); // lf: Long Float
    // In ra dia chi cua bien age di
    printf ("\nDia chi cua age la %u",&ageOfMine);
    // %age la tim dia chi gia tri age trong thanh ram
    // dung ham %u de de tim dia chi cua ham (u: unsigned int)

    // Ngoai le
    int number = 'A';
    char ch = 66;
    printf ("\nNumber la %d",number); // 65 - 'A'
    printf ("\nNumber la %c",number);
    printf ("\nChar la %d",ch); // 66 - 'B' -> 67 - 'C'
    printf ("\nChar la %c",ch);

    //tu duy lap trinh
    //tinh tong | thuong gia tri cua 2 bien so nguyen
    int numb1 = 10;
    int numb2 = 3;
    float result = (float)numb1 / numb2; // ep kieu

    printf ("\n%d / %d = %f",numb1,numb2,result);
    // %d: duoc khai bien gan voi numb1,numb2, tong numb1 + numb2 (result): gia tri float

    //swap: hoan vi
    //hoan vi 2 gia tri trong so nguyen
    int numb4 = 15;
    int sting = 10;

    // c.1
    int chainuoc = numb1; //chai nuoc = 10
    sting= numb1;        //numb3 = 15
    numb1 = chainuoc;     //numb4 = 10
    printf ("\nnumb1 = %d,sting = %d",numb4,sting);
    // c.2
    /*
    sting = sting + numb1;// sting = 10 + 15 = 25
    numb1 = sting - numb1;// numb1 = 25 - 15 = 10
    sting = sting - numb1;// sting = 25 - 10 = 15
    */
    return 0;
}
// return 0: tra ra 0 cho nguoi goi
// windows nhan duoc 0 thi biet chuong trinh ket thuc

//  ASCII
// null: biet kieu nhung ko biet gia tri
// void: khong co gia tri
// A -> a cach nhau 32 ki tu (vd A -> 65 -> a -> 65 + 32)
