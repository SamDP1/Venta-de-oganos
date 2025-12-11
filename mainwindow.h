#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_boton_vercarrito_clicked();

    void on_boton_volver_clicked();

    void on_boton_pagar_clicked();

    void on_boton_confirmar_clicked();

    void on_boton_next_clicked();

    void on_add_orejas_clicked();

    void on_add_corazon_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
