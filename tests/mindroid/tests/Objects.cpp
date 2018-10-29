/*
 * Copyright (C) 2018 Daniel Himmelein
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

#include <gtest/gtest.h>
#include <mindroid/lang/String.h>
#include <mindroid/lang/Integer.h>

using namespace mindroid;

TEST(Mindroid, Objects) {
    sp<Object> o1 = new Object();
    sp<Object> o2 = new Object();
    ASSERT_EQ(o1->equals(o2), false);
    sp<Object> o3 = o1;
    ASSERT_EQ(o1->equals(o3), true);
}
