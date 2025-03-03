#include <QCoreApplication>
#include <QFileInfo>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    //1.FileState


    //
    class FileMabager
    {
    public:
    //Contaner
        bool Add(/*parametrs*/);
        bool Del(/*parametrs*/);




    };











    //QCoreApplication a(argc, argv);

    QFileInfo f_info("C:\\Users\\TEMP.CSI\\Documents\\A.txt");
    std::cout<<f_info.exists()<<std::endl;
    std::cout<<f_info.size()<<std::endl;

    bool fileexist = f_info.exists();
    int filecurentsize = f_info.size();

    while(1){

        f_info.refresh();
        if(fileexist != f_info.exists() || filecurentsize != f_info.size())
        {
            std::cout<<f_info.exists()<<std::endl;
            std::cout<<f_info.size()<<std::endl;
            fileexist = f_info.exists();
            filecurentsize = f_info.size();
        }
    }

    return 0;//a.exec();
}
