#include "server.h"
#include <QApplication>





int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Server w;
    w.show();

    return a.exec();
}


//TCP（Transmission Control Protocol，传输控制协议）是一个用于数据传输的低层的网络协议，多个互联网协议（包括HTTP和FTP）都是基于TCP协议的。
//TCP是一个面向数据流和连接的可靠的传输协议。QTcpSocket类为TCP提供了一个接口，该类也继承自QAbstractSocket。
//可以使用QTcpSocket来实现POP3、SMTP和NNTP等标准的网络协议，也可以实现自定义的网络协议。
//与QUdpSocket传输的数据报不同，QTcpSocket传输的是连续的数据流，它尤其适合于连续的数据传输。
//TCP编程一般分为客户端和服务器端，也就是所谓的C/S（Client/Server）模型。

//在任何数据传输之前，必须建立一个TCP连接到远程的主机和端口上。
//一旦连接被建立，peer（对使用TCP协议连接在一起的主机的通称）的IP地址和端口可以分别使用QTcpSocket::peerAddress()和 QTcpSocket::peerPort()来获取。
//在任何时间，peer都可以关闭连接，这样数据传输就会立即停止。
//QTcpSocket是异步进行工作的，通过发射信号来报告状态改变和错误信息，就像前面介绍的QNetworkAccessManager一样。它依靠事件循环来检测到来的数据，并且自动刷新输出的数据。
//可以使用QTcpSocket::write()来写入数据，使用QTcpSocket::read()来读取数据。QTcpSocket代表了两个独立的数据流：一个用来读取，一个用来写入。
//因为QTcpSocket继承自QIODevice，所以可以使用QTextStream和QDataStream。
//当从一个QTcpSocket中读取数据前，必须先调用QTcpSocket::bytesAvailable()函数来确保已经有足够的数据可用。

//如果要处理到来的TCP连接（例如在一个服务器应用程序中），可以使用QTcpServer类。调用listen()来设置服务器，然后关联newConnection()信号，每当有客户端连接时都会发射该信号。
//在槽中，调用nextPendingConnection()来接收这个连接，然后使用该函数返回的QTcpSocket对象与客户端进行通信。

//尽管QTcpSocket中的大多数函数都是异步工作的，其实也可以使用QTcpSocket来实现同步工作（例如，阻塞）。
//要实现阻塞行为，可以调用QTcpSocket的以waitFor开头的函数，它们会挂起调用的线程，直到一个信号被发射。
//例如，在调用了QTcpSocket::connectToHost()非阻塞函数后，调用QTcpSocket::waitForConnected()来阻塞线程，直到connected()信号被发射。
//使用同步函数，编写代码更简单，最主要的缺点是在waitFor函数阻塞时事件将不再被处理，如果在一个GUI线程中，那么用户界面可能会被冻结。
//所以，一般建议只在非GUI线程中才使用同步套接字。


