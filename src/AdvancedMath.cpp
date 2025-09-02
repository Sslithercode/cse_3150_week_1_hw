#include "AdvancedMath.h"
#include "MathUtils.h"  // We use multiply from MathUtils

namespace AdvancedMath {
    int square(int n) {
        return MathUtils::multiply(n, n);
    }
}