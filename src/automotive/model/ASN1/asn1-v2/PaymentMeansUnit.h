/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "/home/carlosrisma/IVIM ASN1 files/asn1_IS_ISO_TS_14906_EfcDsrcApplication.asn"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_PaymentMeansUnit_H_
#define	_PaymentMeansUnit_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PayUnit.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PaymentMeansUnit */
typedef PayUnit_t	 PaymentMeansUnit_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PaymentMeansUnit;
asn_struct_free_f PaymentMeansUnit_free;
asn_struct_print_f PaymentMeansUnit_print;
asn_constr_check_f PaymentMeansUnit_constraint;
ber_type_decoder_f PaymentMeansUnit_decode_ber;
der_type_encoder_f PaymentMeansUnit_encode_der;
xer_type_decoder_f PaymentMeansUnit_decode_xer;
xer_type_encoder_f PaymentMeansUnit_encode_xer;
oer_type_decoder_f PaymentMeansUnit_decode_oer;
oer_type_encoder_f PaymentMeansUnit_encode_oer;
per_type_decoder_f PaymentMeansUnit_decode_uper;
per_type_encoder_f PaymentMeansUnit_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PaymentMeansUnit_H_ */
#include "asn_internal.h"
