#include <QCoreApplication>
#include <QFileInfo>
#include <QStringList>
#include <QDateTime>
#include <QDebug>
#include <QTextCodec>
#include <QDataStream>
#include <QFile>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    QFile file("file.dat");
    file.open(QIODevice::WriteOnly);
    QFile file("file1.dat");
    file1.open(QIODevice::WriteOnly);
    QDataStream out(&file1);  // 要将串行化后的数据输入到file中
    out << QString("the answer is");   // 串行化字符串
    out << (qint32)42;  // 串行化整数
//    从数据流中读取二进制数据：
    QFile file2("file.dat");
    file2.open(QIODevice::ReadOnly);
    QDataStream in(&file2);    // 从file中读取串行化的数据
    QString str;
    qint32 a1;
    in >> str >> a1; // 提取“the answer is”和42

    return a.exec();
}

