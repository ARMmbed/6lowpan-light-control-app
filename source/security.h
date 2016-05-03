

/*

 * Copyright (c) 2015 ARM Limited. All rights reserved.

 * SPDX-License-Identifier: Apache-2.0

 * Licensed under the Apache License, Version 2.0 (the License); you may

 * not use this file except in compliance with the License.

 * You may obtain a copy of the License at

 *

 * http://www.apache.org/licenses/LICENSE-2.0

 *

 * Unless required by applicable law or agreed to in writing, software

 * distributed under the License is distributed on an AS IS BASIS, WITHOUT

 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

 * See the License for the specific language governing permissions and

 * limitations under the License.

 */

#ifndef __SECURITY_H__

#define __SECURITY_H__

 

#include <inttypes.h>

 

#define MBED_DOMAIN "5b4d4151-fe91-4e9b-ad10-1043849de52c"

#define MBED_ENDPOINT_NAME "86cf844e-4d5f-415f-b5e0-bbce35efc160"

 

const uint8_t SERVER_CERT[] = "-----BEGIN CERTIFICATE-----\r\n"

"MIIBmDCCAT6gAwIBAgIEVUCA0jAKBggqhkjOPQQDAjBLMQswCQYDVQQGEwJGSTEN\r\n"

"MAsGA1UEBwwET3VsdTEMMAoGA1UECgwDQVJNMQwwCgYDVQQLDANJb1QxETAPBgNV\r\n"

"BAMMCEFSTSBtYmVkMB4XDTE1MDQyOTA2NTc0OFoXDTE4MDQyOTA2NTc0OFowSzEL\r\n"

"MAkGA1UEBhMCRkkxDTALBgNVBAcMBE91bHUxDDAKBgNVBAoMA0FSTTEMMAoGA1UE\r\n"

"CwwDSW9UMREwDwYDVQQDDAhBUk0gbWJlZDBZMBMGByqGSM49AgEGCCqGSM49AwEH\r\n"

"A0IABLuAyLSk0mA3awgFR5mw2RHth47tRUO44q/RdzFZnLsAsd18Esxd5LCpcT9w\r\n"

"0tvNfBv4xJxGw0wcYrPDDb8/rjujEDAOMAwGA1UdEwQFMAMBAf8wCgYIKoZIzj0E\r\n"

"AwIDSAAwRQIhAPAonEAkwixlJiyYRQQWpXtkMZax+VlEiS201BG0PpAzAiBh2RsD\r\n"

"NxLKWwf4O7D6JasGBYf9+ZLwl0iaRjTjytO+Kw==\r\n"

"-----END CERTIFICATE-----\r\n";

 

const uint8_t CERT[] = "-----BEGIN CERTIFICATE-----\r\n"

"MIIBzzCCAXOgAwIBAgIEaJCqFjAMBggqhkjOPQQDAgUAMDkxCzAJBgNVBAYTAkZ\r\n"

"JMQwwCgYDVQQKDANBUk0xHDAaBgNVBAMME21iZWQtY29ubmVjdG9yLTIwMTYwHh\r\n"

"cNMTYwNTAzMTE0ODQ2WhcNMTYxMjMxMDYwMDAwWjCBoTFSMFAGA1UEAxNJNWI0Z\r\n"

"DQxNTEtZmU5MS00ZTliLWFkMTAtMTA0Mzg0OWRlNTJjLzg2Y2Y4NDRlLTRkNWYt\r\n"

"NDE1Zi1iNWUwLWJiY2UzNWVmYzE2MDEMMAoGA1UECxMDQVJNMRIwEAYDVQQKEwl\r\n"

"tYmVkIHVzZXIxDTALBgNVBAcTBE91bHUxDTALBgNVBAgTBE91bHUxCzAJBgNVBA\r\n"

"YTAkZJMFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAEYEYojDemXUqg43VM6T5iC\r\n"

"rI4vutWgNEDRUIpZmUt62xyhRIjS9Ioy+76UfFPLeQ+CJOqUA96mI9vh168QUCF\r\n"

"LDAMBggqhkjOPQQDAgUAA0gAMEUCIQDaGtXjXFdwUmN2EYvxwG81iQp6sCdkiIy\r\n"

"JUipwLsndjQIgC+hFDdnRZoeYJrnj/8PhnxsA5narjMWcvqMOTEPs90U=\r\n"

"-----END CERTIFICATE-----\r\n";

 

const uint8_t KEY[] = "-----BEGIN PRIVATE KEY-----\r\n"

"MIGHAgEAMBMGByqGSM49AgEGCCqGSM49AwEHBG0wawIBAQQgn9swEkmTz5PlRQM8\r\n"

"y9gVSZ5D/HjgGM+i1ZKGOMCGLn2hRANCAARgRiiMN6ZdSqDjdUzpPmIKsji+61aA\r\n"

"0QNFQilmZS3rbHKFEiNL0ijL7vpR8U8t5D4Ik6pQD3qYj2+HXrxBQIUs\r\n"

"-----END PRIVATE KEY-----\r\n";

 

#endif //__SECURITY_H__
