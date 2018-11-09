
class NgayThang
{
    public:
        NgayThang();
        NgayThang(int, int, int);

        void setngay(int );

        void setthang(int );

        void setnam(int );

        int getngay();
        int getthang();
        int getnam();
        bool Kiemtrahople();
        virtual ~NgayThang();

    protected:

    private:
        int ngay, thang, nam;

};

