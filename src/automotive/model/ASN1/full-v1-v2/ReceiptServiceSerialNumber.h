/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ISO14906(2018)EfcDsrcApplicationv6-patched.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_ReceiptServiceSerialNumber_H_
#define	_ReceiptServiceSerialNumber_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Int3.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ReceiptServiceSerialNumber */
typedef Int3_t	 ReceiptServiceSerialNumber_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReceiptServiceSerialNumber;
asn_struct_free_f ReceiptServiceSerialNumber_free;
asn_struct_print_f ReceiptServiceSerialNumber_print;
asn_constr_check_f ReceiptServiceSerialNumber_constraint;
ber_type_decoder_f ReceiptServiceSerialNumber_decode_ber;
der_type_encoder_f ReceiptServiceSerialNumber_encode_der;
xer_type_decoder_f ReceiptServiceSerialNumber_decode_xer;
xer_type_encoder_f ReceiptServiceSerialNumber_encode_xer;
oer_type_decoder_f ReceiptServiceSerialNumber_decode_oer;
oer_type_encoder_f ReceiptServiceSerialNumber_encode_oer;
per_type_decoder_f ReceiptServiceSerialNumber_decode_uper;
per_type_encoder_f ReceiptServiceSerialNumber_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ReceiptServiceSerialNumber_H_ */
#include "asn_internal.h"