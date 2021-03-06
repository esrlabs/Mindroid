/*
 * Copyright (C) 2017 E.S.R.Labs
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MINDROID_LANG_INDEXOUTOFBOUNDSEXCEPTION_H_
#define MINDROID_LANG_INDEXOUTOFBOUNDSEXCEPTION_H_

#include <mindroid/lang/RuntimeException.h>

namespace mindroid {

class IndexOutOfBoundsException : public RuntimeException {
public:
    IndexOutOfBoundsException() = default;

    IndexOutOfBoundsException(const char* message) : RuntimeException(message) {
    }

    IndexOutOfBoundsException(const sp<String>& message) : RuntimeException(message) {
    }

    IndexOutOfBoundsException(const char* message, const Exception& cause) : RuntimeException(message, cause) {
    }

    IndexOutOfBoundsException(const sp<String>& message, const Exception& cause) : RuntimeException(message, cause) {
    }

    IndexOutOfBoundsException(const char* message, const sp<Exception>& cause) : RuntimeException(message, cause) {
    }

    IndexOutOfBoundsException(const sp<String>& message, const sp<Exception>& cause) : RuntimeException(message, cause) {
    }

    IndexOutOfBoundsException(const Exception& cause) : RuntimeException(cause) {
    }

    IndexOutOfBoundsException(const sp<Exception>& cause) : RuntimeException(cause) {
    }
};

} /* namespace mindroid */

#endif /* MINDROID_LANG_INDEXOUTOFBOUNDSEXCEPTION_H_ */
