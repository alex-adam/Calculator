#ifndef Calculator_H
#define Calculator_H

#include <QWidget>


QT_BEGIN_NAMESPACE
class QLineEdit;
QT_END_NAMESPACE
class Button;



class Calculator : public QWidget
{
    Q_OBJECT



public:
    Calculator(QWidget *parent = 0);



private slots:
    void digitClicked();
    void unaryOperatorClicked();
    void additiveOperatorClicked();
    void multiplicativeOperatorClicked();
    void equalClicked();
    void pointClicked();
    void clear();
    void clearAll();
    void addToMemory();



private:
    Button *createButton(const QString &text, const char *member);
    void abortOperation();

    bool calculate(double rightOperand, const QString &pendingOperator);

    double sumInMemory;
    double sumSoFar;
    double factorSoFar;

    QString pendingAdditiveOperator;
    QString pendingMultiplicativeOperator;
    bool waitingForOperand;

    QLineEdit *display;

    enum { NumDigitButtons = 10 };
    Button *digitButtons[NumDigitButtons];
};


#endif

