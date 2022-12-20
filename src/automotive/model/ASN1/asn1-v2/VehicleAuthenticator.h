/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "/home/carlosrisma/IVIM ASN1 files/asn1_IS_ISO_TS_14906_EfcDsrcApplication.asn"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_VehicleAuthenticator_H_
#define	_VehicleAuthenticator_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VehicleAuthenticator */
typedef OCTET_STRING_t	 VehicleAuthenticator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VehicleAuthenticator;
asn_struct_free_f VehicleAuthenticator_free;
asn_struct_print_f VehicleAuthenticator_print;
asn_constr_check_f VehicleAuthenticator_constraint;
ber_type_decoder_f VehicleAuthenticator_decode_ber;
der_type_encoder_f VehicleAuthenticator_encode_der;
xer_type_decoder_f VehicleAuthenticator_decode_xer;
xer_type_encoder_f VehicleAuthenticator_encode_xer;
oer_type_decoder_f VehicleAuthenticator_decode_oer;
oer_type_encoder_f VehicleAuthenticator_encode_oer;
per_type_decoder_f VehicleAuthenticator_decode_uper;
per_type_encoder_f VehicleAuthenticator_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleAuthenticator_H_ */
#include "asn_internal.h"
