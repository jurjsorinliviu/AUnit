/*
MIT License

Copyright (c) 2018 Brian T. Park

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef AUNIT_VERBOSITY_H
#define AUNIT_VERBOSITY_H

namespace aunit {

/**
 * Utility class to hold the Verbosity constants. Current used only by
 * TestRunner but potentially could be used by Test and TestOnce in the future,
 * so it seemed better to pull these out into a separate file.
 */
class Verbosity {
  public:
    static const uint8_t kTestRunSummary = 0x01;
    static const uint8_t kTestFailed = 0x02;
    static const uint8_t kTestPassed = 0x04;
    static const uint8_t kTestSkipped = 0x08;
    static const uint8_t kTestAll = 0x0F;
    static const uint8_t kAssertionFailed = 0x10;
    static const uint8_t kAssertionPassed = 0x20;
    static const uint8_t kAssertionAll = 0x30;
    static const uint8_t kDefault = (
        kAssertionFailed | kTestAll);
    static const uint8_t kAll = 0xFF;
    static const uint8_t kNone = 0x00;

  private:
    // Disable constructor, copy-constructor and assignment operator
    Verbosity() = delete;
    Verbosity(const Verbosity&) = delete;
    Verbosity& operator=(const Verbosity&) = delete;
};

}

#endif
