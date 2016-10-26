#ifndef UTILS_H
#define UTILS_H

#include <QString>

/**
 * @brief The Utils class
 *
 * Description:
 * Utility class for convenience functions
 */
class Utils {

public:
    Utils();
    static QString GetFileContent(QString path);

};

#endif // UTILS_H
