#ifndef CMUSICDLG_H
#define CMUSICDLG_H
#endif // CMUSICDLG_H
#include <QDialog>

namespace Ui {
class CMusicDlg;
}

class CMusicDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CMusicDlg(QWidget *parent = 0);
    ~CMusicDlg();

private:
    Ui::CMusicDlg *ui;
};



#include <QToolButton>

QT_FORWARD_DECLARE_CLASS(QMenu)
QT_FORWARD_DECLARE_CLASS(QLabel)
QT_FORWARD_DECLARE_CLASS(QSlider)

class VolumeButton : public QToolButton
{
    Q_OBJECT
    Q_PROPERTY(int volume READ volume WRITE setVolume NOTIFY volumeChanged)

public:
    explicit VolumeButton(QWidget *parent = nullptr);

    int volume() const;

public slots:
    void increaseVolume();
    void descreaseVolume();
    void setVolume(int volume);
    void stylize();

signals:
    void volumeChanged(int volume);

private:
    QMenu *menu = nullptr;
    QLabel *label = nullptr;
    QSlider *slider = nullptr;
};



