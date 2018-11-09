#include <string>
#include "NgayThang.h"
using namespace std;


class Sinhvien
{
    public:
        Sinhvien();
        Sinhvien(string, string, bool, NgayThang);

        string getMSSV();
        string getten();
        bool getsex();
        NgayThang getngaysinh();

        void setMSSV(string );
        void setten(string);
        void setngaysinh(NgayThang);
        void setsex(string );
        virtual ~Sinhvien();

    protected:

    private:
        string MSSV;
        string ten;
        bool gioitinh;
        NgayThang ngaysinh;

};

