#include <QtWidgets>
#include <QPalette>
#include "button.h"


Button::Button(const QString text, QWidget *parent) : QToolButton(parent)
{

    QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
    effect->setBlurRadius(1);
    effect->setOffset(-1,-1);
    setGraphicsEffect(effect);

    setStyleSheet("background-color:#323232;Color:white;");

    QFont font("Helvetica");
    font.setPointSize(18);
    setFont(font);

    setText(text);
}

QSize Button::sizeHint() const
{
    QSize size = QToolButton::sizeHint();
    size.rwidth() = size.height() + 15;
    size.rheight() += 15;
    return size;
}
