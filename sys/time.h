/*
MIT License
Copyright (c) 2019 win32ports
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

#pragma once

#ifndef __SYS_TIME_H_D9C1BEC0_4C79_4302_8B29_322C4497B27F__
#define __SYS_TIME_H_D9C1BEC0_4C79_4302_8B29_322C4497B27F__

#ifndef _WIN32

#pragma message("this sys/time.h implementation is for Windows only!")

#else /* _WIN32 */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if !defined(_WINSOCK2API_) && !defined(_WINSOCKAPI_)
#include <Winsock2.h> /* timeval */
#endif /* !defined(_WINSOCK2API_) && !defined(_WINSOCKAPI_) */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _WIN32 */

#endif /* __SYS_TIME_H_D9C1BEC0_4C79_4302_8B29_322C4497B27F__ */
