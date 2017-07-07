#include "kalkulator.h"
#include "ui_kalkulator.h"

Kalkulator::Kalkulator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Kalkulator)
{
    ui->setupUi(this);
    this ->setFixedSize(412,371);
    connect(ui ->b1,SIGNAL(clicked(bool)),this,SLOT(p1()));
    connect(ui ->b2,SIGNAL(clicked(bool)),this,SLOT(p2()));
    connect(ui ->b3,SIGNAL(clicked(bool)),this,SLOT(p3()));
    connect(ui ->b4,SIGNAL(clicked(bool)),this,SLOT(p4()));
    connect(ui ->b5,SIGNAL(clicked(bool)),this,SLOT(p5()));
    connect(ui ->b6,SIGNAL(clicked(bool)),this,SLOT(p6()));
    connect(ui ->b7,SIGNAL(clicked(bool)),this,SLOT(p7()));
    connect(ui ->b8,SIGNAL(clicked(bool)),this,SLOT(p8()));
    connect(ui ->b9,SIGNAL(clicked(bool)),this,SLOT(p9()));
    connect(ui ->b_0,SIGNAL(clicked(bool)),this,SLOT(p0()));
    connect(ui ->b_C,SIGNAL(clicked(bool)),this,SLOT(p_C()));
    connect(ui ->b_dodawanie,SIGNAL(clicked(bool)),this,SLOT(dodawanie()));
    connect(ui ->b_odejmowanie,SIGNAL(clicked(bool)),this,SLOT(odejmowanie()));
    connect(ui ->b_mnozenie,SIGNAL(clicked(bool)),this,SLOT(mnozenie()));
    connect(ui ->b_dzielenie,SIGNAL(clicked(bool)),this,SLOT(dzielenie()));
    connect(ui ->b_wynik,SIGNAL(clicked(bool)),this,SLOT(wynik()));
    connect(ui ->b_dot,SIGNAL(clicked(bool)),this,SLOT(p_dot()));
}

void Kalkulator::p1(void)
{
    double x;
    x = ui ->lcd ->value() * 10;
    x += 1;
    ui ->lcd ->display(x);
}

void Kalkulator::p2(void)
{
    double x;
    x = ui ->lcd ->value() * 10;
    x += 2;
    ui ->lcd ->display(x);
}

void Kalkulator::p3(void)
{
    double x;
    x = ui ->lcd ->value() * 10;
    x += 3;
    ui ->lcd ->display(x);
}

void Kalkulator::p4(void)
{
    double x;
    x = ui ->lcd ->value() * 10;
    x += 4;
    ui ->lcd ->display(x);
}

void Kalkulator::p5(void)
{
    double x;
    x = ui ->lcd ->value() * 10;
    x += 5;
    ui ->lcd ->display(x);
}

void Kalkulator::p6(void)
{
    double x;
    x = ui ->lcd ->value() * 10;
    x += 6;
    ui ->lcd ->display(x);
}

void Kalkulator::p7(void)
{
    double x;
    x = ui ->lcd ->value() * 10;
    x += 7;
    ui ->lcd ->display(x);
}

void Kalkulator::p8(void)
{
    double x;
    x = ui ->lcd ->value() * 10;
    x += 8;
    ui ->lcd ->display(x);
}

void Kalkulator::p9(void)
{
    double x;
    x = ui ->lcd ->value() * 10;
    x += 9;
    ui ->lcd ->display(x);
}

void Kalkulator::p0(void)
{
    double x;
    x = ui ->lcd ->value() * 10;
    ui  ->lcd ->display(x);
}

void Kalkulator::p_C(void)
{
    ui ->lcd ->display(0);
    ui ->l1 ->setText(" ");
    tmp = 0;
    dzialanie = 0;
}

void Kalkulator::p_dot(void)
{

}

void Kalkulator::dodawanie(void)
{
    tmp = ui ->lcd ->value();
    ui ->lcd ->display(0);
    ui ->l1 ->setText("(+)");
    dzialanie = 1;
}

void Kalkulator::odejmowanie(void)
{
    tmp = ui ->lcd ->value();
    ui ->lcd ->display(0);
    ui ->l1 ->setText("(-)");
    dzialanie = 2;
}

void Kalkulator::mnozenie(void)
{
    tmp = ui ->lcd ->value();
    ui ->lcd ->display(0);
    ui ->l1 ->setText("(X)");
    dzialanie = 3;
}

void Kalkulator::dzielenie(void)
{
    tmp = ui ->lcd ->value();
    ui ->lcd ->display(0);
    ui ->l1 ->setText("(/)");
    dzialanie = 4;
}

void Kalkulator::wynik(void)
{
    if(dzialanie == 1)
    {
        double x;
        x = ui ->lcd ->value();
        ui ->lcd ->display(tmp + x);
        ui ->l1 ->setText(" ");
        dzialanie = 0;
        tmp = 0;
    }
    else if(dzialanie == 2)
    {
        double x;
        x = ui ->lcd ->value();
        ui ->lcd ->display(tmp - x);
        ui ->l1 ->setText(" ");
        dzialanie = 0;
        tmp = 0;
    }
    else if(dzialanie == 3)
    {
        double x;
        x = ui ->lcd ->value();
        ui ->lcd ->display(tmp * x);
        ui ->l1 ->setText(" ");
        dzialanie = 0;
        tmp = 0;
    }
    else if(dzialanie == 4)
    {
        double x;
        x = ui ->lcd ->value();
        ui ->lcd ->display(tmp / x);
        ui ->l1 ->setText(" ");
        dzialanie = 0;
        tmp = 0;
    }
}

Kalkulator::~Kalkulator()
{
    delete ui;
}
