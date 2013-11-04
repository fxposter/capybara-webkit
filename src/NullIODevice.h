#include <QIODevice>

class NullIODevice : public QIODevice {
  Q_OBJECT
  public:
    NullIODevice(QObject* parent = 0);
    qint64 readData(char *data, qint64 maxSize);
    qint64 writeData(const char *data, qint64 maxSize);
};
