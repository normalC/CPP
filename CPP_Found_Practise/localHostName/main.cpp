#include "localhostname.h"
#include <QApplication>
#include <QHostInfo>
#include <QNetworkInterface>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LocalHostName w;
    w.show();

    QString localHostName = QHostInfo::localHostName();
    QHostInfo info = QHostInfo::fromName(localHostName);
    foreach (QHostAddress address, info.addresses())
    {
        if(address.protocol() == QAbstractSocket::IPv4Protocol)
             qDebug() << address.toString();}
    qDebug() << "localHostName: " << localHostName << endl;



    QList<QNetworkInterface> list = QNetworkInterface::allInterfaces();
    foreach (QNetworkInterface interface, list)  // 遍历每一个网络接口
    {
        qDebug() << "Name: " << interface.name(); // 接口名称
        qDebug() << "HardwareAddress: " << interface.hardwareAddress();  // 硬件地址
        // 获取IP地址条目列表
        QList<QNetworkAddressEntry> entryList = interface.addressEntries();
        foreach (QNetworkAddressEntry entry, entryList)  // 遍历每一个IP地址条目
        {
                qDebug() << "IP Address: " << entry.ip().toString();  // IP地址
                qDebug() << "Netmask: " << entry.netmask().toString();  // 子网掩码
                qDebug() << "Broadcast: " << entry.broadcast().toString();  // 广播地址
        }
    }


    return a.exec();
}
