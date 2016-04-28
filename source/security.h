

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

#define MBED_ENDPOINT_NAME "80ed9649-2dd6-4464-9229-a99d118bbaf4"



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

"MIIB0DCCAXOgAwIBAgIEB+wMczAMBggqhkjOPQQDAgUAMDkxCzAJBgNVBAYTAkZ\r\n"

"JMQwwCgYDVQQKDANBUk0xHDAaBgNVBAMME21iZWQtY29ubmVjdG9yLTIwMTYwHh\r\n"

"cNMTYwNDI2MTgyMDE4WhcNMTYxMjMxMDYwMDAwWjCBoTFSMFAGA1UEAxNJNWI0Z\r\n"

"DQxNTEtZmU5MS00ZTliLWFkMTAtMTA0Mzg0OWRlNTJjLzgwZWQ5NjQ5LTJkZDYt\r\n"

"NDQ2NC05MjI5LWE5OWQxMThiYmFmNDEMMAoGA1UECxMDQVJNMRIwEAYDVQQKEwl\r\n"

"tYmVkIHVzZXIxDTALBgNVBAcTBE91bHUxDTALBgNVBAgTBE91bHUxCzAJBgNVBA\r\n"

"YTAkZJMFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAEeKjXb2W+eiQXDQ7KwbZOk\r\n"

"C8PUnm7S8mE80hzLWhBXnIROoKgpUCvEDHzkpmUTKAwGa/b6I0ENCBY24JIkCw1\r\n"

"BDAMBggqhkjOPQQDAgUAA0kAMEYCIQD7lXZFrochrg6ndgT5kXaCUb10JWXKSSs\r\n"

"CvazW7VJPvQIhAPbiQ/90cXPf/7f0Klt/R97d/6dkgLGDXfEpg0Y6zhhR\r\n"

"-----END CERTIFICATE-----\r\n";



const uint8_t KEY[] = "-----BEGIN PRIVATE KEY-----\r\n"

"MIGHAgEAMBMGByqGSM49AgEGCCqGSM49AwEHBG0wawIBAQQgOz7kaZ8+JOi9ZfV6\r\n"

"bO3F9ip8mdEjHgGSS2lJ7UJl78uhRANCAAR4qNdvZb56JBcNDsrBtk6QLw9SebtL\r\n"

"yYTzSHMtaEFechE6gqClQK8QMfOSmZRMoDAZr9vojQQ0IFjbgkiQLDUE\r\n"

"-----END PRIVATE KEY-----\r\n";



#endif //__SECURITY_H__


//
//
///*
//
// * Copyright (c) 2015 ARM Limited. All rights reserved.
//
// * SPDX-License-Identifier: Apache-2.0
//
// * Licensed under the Apache License, Version 2.0 (the License); you may
//
// * not use this file except in compliance with the License.
//
// * You may obtain a copy of the License at
//
// *
//
// * http://www.apache.org/licenses/LICENSE-2.0
//
// *
//
// * Unless required by applicable law or agreed to in writing, software
//
// * distributed under the License is distributed on an AS IS BASIS, WITHOUT
//
// * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//
// * See the License for the specific language governing permissions and
//
// * limitations under the License.
//
// */
//
//#ifndef __SECURITY_H__
//
//#define __SECURITY_H__
//
//
//
//#include <inttypes.h>
//
//
//
//#define MBED_DOMAIN "Hasnain"
//
//#define MBED_ENDPOINT_NAME "test_device"
//
//
//
//const uint8_t SERVER_CERT[] = "-----BEGIN CERTIFICATE-----\r\n"
//
//"MIIBmDCCAT6gAwIBAgIEVUCA0jAKBggqhkjOPQQDAjBLMQswCQYDVQQGEwJGSTEN\r\n"
//
//"MAsGA1UEBwwET3VsdTEMMAoGA1UECgwDQVJNMQwwCgYDVQQLDANJb1QxETAPBgNV\r\n"
//
//"BAMMCEFSTSBtYmVkMB4XDTE1MDQyOTA2NTc0OFoXDTE4MDQyOTA2NTc0OFowSzEL\r\n"
//
//"MAkGA1UEBhMCRkkxDTALBgNVBAcMBE91bHUxDDAKBgNVBAoMA0FSTTEMMAoGA1UE\r\n"
//
//"CwwDSW9UMREwDwYDVQQDDAhBUk0gbWJlZDBZMBMGByqGSM49AgEGCCqGSM49AwEH\r\n"
//
//"A0IABLuAyLSk0mA3awgFR5mw2RHth47tRUO44q/RdzFZnLsAsd18Esxd5LCpcT9w\r\n"
//
//"0tvNfBv4xJxGw0wcYrPDDb8/rjujEDAOMAwGA1UdEwQFMAMBAf8wCgYIKoZIzj0E\r\n"
//
//"AwIDSAAwRQIhAPAonEAkwixlJiyYRQQWpXtkMZax+VlEiS201BG0PpAzAiBh2RsD\r\n"
//
//"NxLKWwf4O7D6JasGBYf9+ZLwl0iaRjTjytO+Kw==\r\n"
//
//"-----END CERTIFICATE-----\r\n";
//
//
//
//const uint8_t CERT[] = "-----BEGIN CERTIFICATE-----\r\n"
//
//"MIIB0DCCAXOgAwIBAgIEEFNGgTAMBggqhkjOPQQDAgUAMDkxCzAJBgNVBAYTAkZ\r\n"
//
//"JMQwwCgYDVQQKDANBUk0xHDAaBgNVBAMME21iZWQtY29ubmVjdG9yLTIwMTYwHh\r\n"
//
//"cNMTYwMzA4MTIwNTI2WhcNMTYxMjMxMDYwMDAwWjCBoTFSMFAGA1UEAxNJNWI0Z\r\n"
//
//"DQxNTEtZmU5MS00ZTliLWFkMTAtMTA0Mzg0OWRlNTJjLzdjN2NkOTJhLTEyMjAt\r\n"
//
//"NGE4OC05MjgwLWY3YjU0YjA4MmM2YzEMMAoGA1UECxMDQVJNMRIwEAYDVQQKEwl\r\n"
//
//"tYmVkIHVzZXIxDTALBgNVBAcTBE91bHUxDTALBgNVBAgTBE91bHUxCzAJBgNVBA\r\n"
//
//"YTAkZJMFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAEtplHRsnbcCZO0MgvDSMuG\r\n"
//
//"XvqbuprWx2kzue5v5s1WDSTFUPcLBQ6FNdaNHgGC1MZdQcXKp3T5ovBnC7KlAz5\r\n"
//
//"lzAMBggqhkjOPQQDAgUAA0kAMEYCIQCvGknNf8kRM3rq9uyUxLbgbusz2wMWSPS\r\n"
//
//"gWKtScce9/QIhAOlIVCndA6K/LL1C7PpSl4e3vd7dhEeiPO3cMoneEFPt\r\n"
//
//"-----END CERTIFICATE-----\r\n";
//
//
//
//const uint8_t KEY[] = "-----BEGIN PRIVATE KEY-----\r\n"
//
//"MIGHAgEAMBMGByqGSM49AgEGCCqGSM49AwEHBG0wawIBAQQgJfN+P5AFh7RlYNPR\r\n"
//
//"RiP9FYvEzU10fRa9jkpA/DrctUuhRANCAAS2mUdGydtwJk7QyC8NIy4Ze+pu6mtb\r\n"
//
//"HaTO57m/mzVYNJMVQ9wsFDoU11o0eAYLUxl1BxcqndPmi8GcLsqUDPmX\r\n"
//
//"-----END PRIVATE KEY-----\r\n";
//
//
//
//#endif //__SECURITY_H__
