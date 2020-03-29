
#include <QApplication>
#include <QMediaRecorder>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Widget w;
    recorder = new QMediaRecorder(camera);
    QAudioEncoderSettings audioSettings;
    audioSettings.setCodec("audio/amr");
    audioSettings.setQuality(QMultimedia::HighQuality);
    recorder->setAudioSettings(audioSettings);
    recorder->setOutputLocation(QUrl::fromLocalFile(fileName));
    recorder->record();

    w.show();

    return a.exec();
}
