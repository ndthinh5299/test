#include "NgayThang.h"

NgayThang::NgayThang()
{
    //ctor
}
NgayThang::NgayThang(int _ngay, int _thang, int _nam){
    this->ngay=_ngay;
    this->thang=_thang;
    this->nam=_nam;
}
int NgayThang::getngay(){
    return this->ngay;
    }
int NgayThang::getthang(){
    return this->thang;
}
int NgayThang::getnam(){
    return this->nam;
}
void NgayThang::setngay(int _ngay){
    this->ngay=_ngay;
}
void NgayThang::setthang(int _thang){
    this->thang=_thang;
}
void NgayThang::setnam(int _nam){
    this->nam=_nam;
}
bool NgayThang::Kiemtrahople(){
    if(this->ngay >0 && this->thang >0 && this->nam >0){
        if(this->thang<=12){
            switch(this->thang){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return (this->ngay <=31);
        case 4: case 6: case 9: case 11:
            return (this->ngay<=30);
        case 2:
            if((this->nam %400)==0 ||
                (this->nam%4==0 && this->nam %100 !=0)) return (this->ngay<=29);
            else (this->ngay <=28);
            }
        }
        else return false;
    }
    else return false;
}

NgayThang::~NgayThang()
{
    //dtor
}
