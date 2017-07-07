#ifndef KALKULATOR_H
#define KALKULATOR_H

#include <QWidget>

namespace Ui {
class Kalkulator;
}

class Kalkulator : public QWidget
{
    Q_OBJECT

public:
    explicit Kalkulator(QWidget *parent = 0);
    ~Kalkulator();

public slots:
    void p1(void);
    void p2(void);
    void p3(void);
    void p4(void);
    void p5(void);
    void p6(void);
    void p7(void);
    void p8(void);
    void p9(void);
    void p0(void);
    void p_C(void);
    void p_dot(void);
    void dodawanie(void);
    void odejmowanie(void);
    void mnozenie(void);
    void dzielenie(void);
    void wynik(void);

private:
    Ui::Kalkulator *ui;
    double tmp;
    int dzialanie;
};

#endif // KALKULATOR_H
