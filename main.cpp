#include <iostream>

void task2_1(){

//    if ოპერატორი
//        შეადგინეთ პროგრამა, რომელიც დაადგენს:
//    1. რიცხვი არის თუ არა 5-ის ჯერადი.
//    2. ორ რიცხვს შორის მინიმალურს.
int  numb;
std::cin>>numb;
if(numb % 5==0){
    std::cout<<"Yes";
}else{
    std::cout<<"Not";
}
float a,b,min;
    if(a>b){
        min=b;
    }else{
        min=a;
    }

}


void task2_2(){
//    ჩადგმული if ოპერატორი
//        შეადგინეთ პროგრამა, რომელიც დაადგენს:
//    1. სამ რიცხვს შორის მაქსიმალურს.
//    2. ორ რიცხვს შორის რომელია 5-ის ჯერადი.

float a,b,c,max;
 max=a;

 if(b>max){
     max=b;
 }if(c>max){
     max=c;
 }

 int num1,num2;


 if(num1 %5==0){
     std::cout << "5 is jeradia :" << num1;

 }else{
     if(num2%5==0){
         std::cout << "5 is jeradia :" << num2;

     }
 }





}

void task2_3(){
//    ლოგიკა
//    შეადგინეთ პროგრამა, რომელიც დაადგენს
//    1. x რიცხვი არის თუ არა 0 < x <= 17 დიაპაზონში მოთავსებული.
//    2. x რიცხვი არის თუ არა 25-ზე ნაკლები ან 100-ზე მეტი.
//
int x;
std::cin>>x;
if(x>0 && x<=17){
    std::cout<<"X in 0 < x <= 17";

}else {
    if(x<25 || x>100){
        std::cout<<"x<25  an x>100";

    }
}











}

void task2_4(){
//    switch ოპერატორი
//        შეადგინეთ პროგრამა, რომელიც:
//    1. თვის ნომრის მიხედვით გასცემს შესაბამისი თვის დასახელებას.
//    

int tvis_nomeri;
std::cin>>tvis_nomeri;


    switch (tvis_nomeri) {
        case 1:std::cout<<"იანვარი";break;

        case 2:std::cout<<"თებერვალი";break;
        case 3:std::cout<<"მარტი";break;
        case 4:std::cout<<"აპრილი";break;
        case 5:std::cout<<"მაისი";break;
        case 6:std::cout<<"ივნისი";break;
        case 7:std::cout<<"ივლისი";break;
        case 8:std::cout<<"აგვისტო";break;
        case 9:std::cout<<"სექტემბერი";break;
        case 10:std::cout<<"ოქტომბერი";break;
        case 11:std::cout<<"ნოემბერი";break;
        case 12:std::cout<<"დეკემბერი";break;
        default:std::cout<<"შეიყვანეთ 1-12  ";break;
    }





    
    
}


int main() {

    task2_1();
    task2_2();
     task2_3();
    task2_4();


    return 0;
}
