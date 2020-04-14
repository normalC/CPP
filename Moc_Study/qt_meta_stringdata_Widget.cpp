#include <qDebug>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>


struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[16];
    char stringdata0[175];
};

#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 15), // "nickNameChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "strNewName"
QT_MOC_LITERAL(4, 35, 16), // "nickNameChanged1"
QT_MOC_LITERAL(5, 52, 12), // "countChanged"
QT_MOC_LITERAL(6, 65, 9), // "nNewCount"
QT_MOC_LITERAL(7, 75, 12), // "valueChanged"
QT_MOC_LITERAL(8, 88, 11), // "dblNewValue"
QT_MOC_LITERAL(9, 100, 11), // "setNickName"
QT_MOC_LITERAL(10, 112, 12), // "setNickName1"
QT_MOC_LITERAL(11, 125, 8), // "setCount"
QT_MOC_LITERAL(12, 134, 8), // "nickName"
QT_MOC_LITERAL(13, 143, 9), // "nickName1"
QT_MOC_LITERAL(14, 153, 5), // "count"
QT_MOC_LITERAL(15, 159, 5) // "value"

    },
    "Widget\0nickNameChanged\0strNewName\0strNewName\0"
    "nickNameChanged1\0countChanged\0nNewCount\0"
    "valueChanged\0dblNewValue\0setNickName\0"
    "setNickName1\0setCount\0nickName\0nickName1\0"
    "count\0value"
};
#undef QT_MOC_LITERAL

int main(int argc,char *argv[])
{
qDebug()<<sizeof(QByteArrayData);



qDebug()<<sizeof(QByteArrayData);
//打印字符串
for (int i=0; i<13; i++)
{
    //把 void* 转成 char* 打印
    char *ptr=(char *)(qt_meta_stringdata_Widget.data[i].data());

    qDebug()<< ptr;
}
}
