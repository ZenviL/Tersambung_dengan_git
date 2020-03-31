#include <iostream>
#include <string>

using namespace std;
//Penulisan kelas
class siswa
{
    public:
            string nama;
            //prototype
            //note
            //didalam parameter suatu prototype tidak diperlukan nama dari variabel
            siswa(const char*);
            void display();
            string get_nama();
            void set_nama(const char*);

};



int main(int argc, char const *argv[])
{
    cout << "LATIHAN PROTOYPE PADA OOP C++" << endl;
    //deklarasi class di heap
    siswa* siswa_1 = new siswa("ataf");
    cout << "1. get name : " << siswa_1->get_nama() << endl;
    //void tidak bisa masuk cout
    siswa_1->display();
    cout << "2. set name baru " << endl;
    siswa_1->set_nama("gifar");
    siswa_1->display();

    delete siswa_1;
    return 0;
}

//assigment / penjabaran dari prototype bisa dimana saja
siswa::siswa(const char* nama)
{
    this->nama = nama;
}
void siswa::display()
{
    cout << "display nama = " << this->nama << endl;
}
string siswa::get_nama()
{
    return this->nama;
}
void siswa::set_nama(const char* nama)
{
    this->nama = nama;
}