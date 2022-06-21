#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_identify_pressed();

    void on_back_pressed();

    void on_crocodile_pressed();

    void on_pushButton_pressed();

    void on_pushButton_2_pressed();

    void on_snake_pressed();

    void on_pushButton_5_pressed();

    void on_pushButton_6_pressed();

    void on_pushButton_7_pressed();

    void on_pushButton_8_pressed();

    void on_pushButton_9_pressed();

    void on_pushButton_10_pressed();

    void on_pushButton_3_pressed();

    void on_pushButton_12_pressed();

    void on_pushButton_13_pressed();

    void on_pushButton_11_pressed();

    void on_pushButton_4_pressed();

    void on_pushButton_22_pressed();

    void on_pushButton_17_pressed();

    void on_pushButton_18_pressed();

    void on_pushButton_19_pressed();

    void on_lizard_pressed();

    void on_pushButton_23_pressed();

    void on_pushButton_24_pressed();

    void on_pushButton_25_pressed();

    void on_pushButton_27_pressed();

    void on_pushButton_26_pressed();

    void on_pushButton_28_pressed();

    void on_turtle_pressed();

    void on_pushButton_29_pressed();

    void on_pushButton_30_pressed();

    void on_pushButton_31_pressed();

    void on_pushButton_32_pressed();

    void on_pushButton_33_pressed();

    void on_pushButton_34_pressed();

    void on_pushButton_16_pressed();

    void on_pushButton_14_pressed();

    void on_pushButton_15_pressed();

    void on_pushButton_20_pressed();

    void on_pushButton_21_pressed();

    void on_pushButton_73_pressed();

    void on_pushButton_35_pressed();

    void on_pushButton_36_pressed();

    void on_pushButton_74_pressed();

    void on_pushButton_37_pressed();

    void on_pushButton_40_pressed();

    void on_pushButton_39_pressed();

    void on_pushButton_38_pressed();

    void on_log_pressed();

    void on_pushButton_41_pressed();

    void on_pushButton_42_pressed();

    void on_pushButton_91_pressed();

    void on_pushButton_89_pressed();

    void on_pushButton_94_pressed();

    void on_pushButton_93_pressed();

    void on_pushButton_101_pressed();

    void on_pushButton_100_pressed();

    void on_system_pressed();

    void on_fusion_pressed();

    void on_geometric_pressed();

    void on_dark_pressed();

    void on_light_pressed();

    void on_pushButton_102_pressed();

    void on_pushButton_90_pressed();

    void on_pushButton_92_pressed();

    void on_pushButton_99_pressed();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
