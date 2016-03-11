
#include <QString>
#include <QVariant>
#include <QQuickItem>
#include <QQmlProperty>

#include "reactviewmanager.h"
#include "reactitem.h"
#include "reactbridge.h"
#include "reactvaluecoercion.h"
#include "reactflexlayout.h"
#include "reactpropertyhandler.h"
#include "reacttextproperties.h"


class ViewPropertyHandler : public ReactPropertyHandler {
  Q_OBJECT
  Q_PROPERTY(QString backfaceVisibility READ backfaceVisibility WRITE setBackfaceVisibility)
  Q_PROPERTY(QColor backgroundColor READ backgroundColor WRITE setBackgroundColor)
  Q_PROPERTY(QColor borderColor READ borderColor WRITE setBorderColor)
  Q_PROPERTY(QColor borderTopColor READ borderTopColor WRITE setBorderTopColor)
  Q_PROPERTY(QColor borderRightColor READ borderRightColor WRITE setBorderRightColor)
  Q_PROPERTY(QColor borderBottomColor READ borderColor WRITE setBorderBottomColor)
  Q_PROPERTY(QColor borderLeftColor READ borderLeftColor WRITE setBorderLeftColor)
  Q_PROPERTY(double borderRadius READ borderRadius WRITE setBorderRadius)
  Q_PROPERTY(double borderTopLeftRadius READ borderTopLeftRadius WRITE setBorderTopLeftRadius)
  Q_PROPERTY(double borderTopRightRadius READ borderTopRightRadius WRITE setBorderTopRightRadius)
  Q_PROPERTY(double borderBottomLeftRadius READ borderBottomLeftRadius WRITE setBorderBottomLeftRadius)
  Q_PROPERTY(double borderBottomRightRadius READ borderBottomRightRadius WRITE setBorderBottomRightRadius)
  Q_PROPERTY(QString borderStyle READ borderStyle WRITE setBorderStyle)
  Q_PROPERTY(double borderWidth READ borderWidth WRITE setBorderWidth)
  Q_PROPERTY(double borderTopWidth READ borderTopWidth WRITE setBorderTopWidth)
  Q_PROPERTY(double borderRightWidth READ borderRightWidth WRITE setBorderRightWidth)
  Q_PROPERTY(double borderBottomWidth READ borderBottomWidth WRITE setBorderBottomWidth)
  Q_PROPERTY(double borderLeftWidth READ borderLeftWidth WRITE setBorderLeftWidth)
  Q_PROPERTY(double opacity READ opacity WRITE setOpacity)
  Q_PROPERTY(QString overflow READ overflow WRITE setOverflow)
  Q_PROPERTY(QColor shadowColor READ shadowColor WRITE setShadowColor)
  Q_PROPERTY(QSize shadowOffset READ shadowOffset WRITE setShadowOffset)
  Q_PROPERTY(double shadowOpacity READ shadowOpacity WRITE setShadowOpacity)
  Q_PROPERTY(double shadowRadius READ shadowRadius WRITE setShadowRadius)
public:
  ViewPropertyHandler(QObject* object)
    : ReactPropertyHandler(object, false) {
  }

  QString backfaceVisibility() const;
  void setBackfaceVisibility(const QString& backfaceVisibility);
  QColor backgroundColor() const;
  void setBackgroundColor(const QColor& backgroundColor);
  QColor borderColor() const;
  void setBorderColor(const QColor& borderColor);
  QColor borderTopColor() const;
  void setBorderTopColor(const QColor& borderTopColor);
  QColor borderRightColor() const;
  void setBorderRightColor(const QColor& borderRightColor);
  QColor borderBottomColor() const;
  void setBorderBottomColor(const QColor& borderBottomColor);
  QColor borderLeftColor() const;
  void setBorderLeftColor(const QColor& borderLeftColor);
  double borderRadius() const;
  void setBorderRadius(double borderRadius);
  double borderTopLeftRadius() const;
  void setBorderTopLeftRadius(double borderTopLeftRadius);
  double borderTopRightRadius() const;
  void setBorderTopRightRadius(double borderTopRightRadius); double borderBottomLeftRadius() const;
  void setBorderBottomLeftRadius(double borderBottomLeftRadius);
  double borderBottomRightRadius() const;
  void setBorderBottomRightRadius(double borderTopRightRadius);
  QString borderStyle() const;
  void setBorderStyle(const QString& borderStyle);
  double borderWidth() const;
  void setBorderWidth(double borderWidth);
  double borderTopWidth() const;
  void setBorderTopWidth(double borderTopWidth);
  double borderRightWidth() const;
  void setBorderRightWidth(double borderRightWidth);
  double borderBottomWidth() const;
  void setBorderBottomWidth(double borderBottomWidth);
  double borderLeftWidth() const;
  void setBorderLeftWidth(double borderLeftWidth);
  double opacity() const;
  void setOpacity(double opacity);
  QString overflow() const;
  void setOverflow(const QString& overflow);
  QColor shadowColor() const;
  void setShadowColor(const QColor& color);
  QSize shadowOffset() const;
  void setShadowOffset(const QSize& shadowOffset);
  double shadowOpacity() const;
  void setShadowOpacity(double shadowOpacity);
  double shadowRadius() const;
  void setShadowRadius(double shadowRadius);
};

void ViewPropertyHandler::setBackfaceVisibility(const QString& backfaceVisibility)
{
  // TODO:
}

QColor ViewPropertyHandler::backgroundColor() const
{
  return m_object->property("color").value<QColor>();
}

void ViewPropertyHandler::setBackgroundColor(const QColor& backgroundColor)
{
  m_object->setProperty("color", backgroundColor);
}

QColor ViewPropertyHandler::borderColor() const
{
  QQmlProperty p(m_object, "border.color");
  p.read().value<QColor>();
}

void ViewPropertyHandler::setBorderColor(const QColor& borderColor)
{
  QQmlProperty p(m_object, "border.color");
  p.write(QVariant::fromValue(borderColor));
}

void ViewPropertyHandler::setBorderLeftColor(const QColor& borderLeftColor)
{
  // TODO; custom item
}

void ViewPropertyHandler::setBorderRightColor(const QColor& borderRightColor)
{
  // TODO; custom item
}

void ViewPropertyHandler::setBorderTopColor(const QColor& borderTopColor)
{
  // TODO; custom item
}

void ViewPropertyHandler::setBorderBottomColor(const QColor& borderBottomColor)
{
  // TODO; custom item
}

double ViewPropertyHandler::borderRadius() const
{
  return m_object->property("radius").toDouble();
}

void ViewPropertyHandler::setBorderRadius(double borderRadius)
{
  m_object->setProperty("radius", borderRadius);
}

void ViewPropertyHandler::setBorderTopLeftRadius(double borderTopLeftRadius)
{
  // TODO; custom item
}

void ViewPropertyHandler::setBorderTopRightRadius(double borderTopLeftRadius)
{
  // TODO; custom item
}

double ViewPropertyHandler::borderWidth() const
{
  QQmlProperty p(m_object, "border.width");
  p.read().value<double>();
}

void ViewPropertyHandler::setBorderWidth(double borderWidth)
{
  QQmlProperty p(m_object, "border.width");
  p.write(QVariant::fromValue(borderWidth));
}

void ViewPropertyHandler::setBorderTopWidth(double borderTopWidth)
{
  // TOOD; custom item
}

void ViewPropertyHandler::setBorderRightWidth(double borderRightWidth)
{
  // TOOD; custom item
}

void ViewPropertyHandler::setBorderBottomWidth(double borderWidth)
{
  // TOOD; custom item
}

void ViewPropertyHandler::setBorderLeftWidth(double borderLeftWidth)
{
  // TOOD; custom item
}

double ViewPropertyHandler::opacity() const
{
  return m_object->property("opacity").toDouble();
}

void ViewPropertyHandler::setOpacity(double opacity)
{
  m_object->setProperty("opacity", opacity);
}

void ViewPropertyHandler::setOverflow(const QString& overflow)
{
  m_object->setProperty("clip", overflow == "hidden");
}

void ViewPropertyHandler::setShadowColor(const QColor& color)
{
  // TODO:
}

void ViewPropertyHandler::setShadowOpacity(double shadowOpacity)
{
  // TODO:
}

void ViewPropertyHandler::setShadowRadius(double shadowRadius)
{
  // TODO:
}


ReactViewManager::ReactViewManager(QObject *parent)
  : QObject(parent)
{
}

ReactViewManager::~ReactViewManager()
{
}

void ReactViewManager::setBridge(ReactBridge* bridge)
{
  m_bridge = bridge;
}

// TODO: this doesnt seem right
ReactViewManager* ReactViewManager::viewManager()
{
  return this;
}

ReactPropertyHandler* ReactViewManager::propertyHandler(QObject* object)
{
  return new ViewPropertyHandler(object);
}

QString ReactViewManager::moduleName()
{
  return "RCTViewManager";
}

QList<ReactModuleMethod*> ReactViewManager::methodsToExport()
{
  return QList<ReactModuleMethod*>{};
}

QVariantMap ReactViewManager::constantsToExport()
{
  return QVariantMap{};
}

QStringList ReactViewManager::customDirectEventTypes()
{
  return QStringList{};
}

QStringList ReactViewManager::customBubblingEventTypes()
{
  return QStringList{"press", "change", "focus", "blur", "submitEditing", "endEditing", "touchStart", "touchMove", "touchCancel", "touchEnd"};
}

bool ReactViewManager::shouldLayout() const
{
  return true;
}

void ReactViewManager::addChildItem(QQuickItem* container, QQuickItem* child, int position) const
{
  // XXX: remove this
  if ((ReactTextProperties::get(container, false) == nullptr) &&
      (ReactTextProperties::get(child, false) != nullptr)) {
    ReactTextProperties::get(child)->hookLayout();
  }
  child->setParentItem(container);
  child->setZ(position);
}

// TODO: Going to need to return a custom item here, to support
// all relevant properties
QQuickItem* ReactViewManager::view(const QVariantMap& properties) const
{
  // qDebug() << __PRETTY_FUNCTION__;

  QQmlComponent component(m_bridge->qmlEngine());
  component.setData("import QtQuick 2.4\nRectangle{color:\"transparent\"\n}", QUrl());
  if (!component.isReady())
    qCritical() << "Rectangle not ready!";

  QQuickItem* item = qobject_cast<QQuickItem*>(component.create());
  if (item == nullptr) {
    qCritical() << "Unable to construct Rectangle";
    return nullptr;
  }

  return item;
}


#include "reactviewmanager.moc"
