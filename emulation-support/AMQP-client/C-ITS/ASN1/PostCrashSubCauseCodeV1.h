/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_PostCrashSubCauseCodeV1_H_
#define	_PostCrashSubCauseCodeV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PostCrashSubCauseCodeV1 {
	PostCrashSubCauseCodeV1_unavailable	= 0,
	PostCrashSubCauseCodeV1_accidentWithoutECallTriggered	= 1,
	PostCrashSubCauseCodeV1_accidentWithECallManuallyTriggered	= 2,
	PostCrashSubCauseCodeV1_accidentWithECallAutomaticallyTriggered	= 3,
	PostCrashSubCauseCodeV1_accidentWithECallTriggeredWithoutAccessToCellularNetwork	= 4
} e_PostCrashSubCauseCodeV1;

/* PostCrashSubCauseCodeV1 */
typedef long	 PostCrashSubCauseCodeV1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PostCrashSubCauseCodeV1;
asn_struct_free_f PostCrashSubCauseCodeV1_free;
asn_struct_print_f PostCrashSubCauseCodeV1_print;
asn_constr_check_f PostCrashSubCauseCodeV1_constraint;
ber_type_decoder_f PostCrashSubCauseCodeV1_decode_ber;
der_type_encoder_f PostCrashSubCauseCodeV1_encode_der;
xer_type_decoder_f PostCrashSubCauseCodeV1_decode_xer;
xer_type_encoder_f PostCrashSubCauseCodeV1_encode_xer;
oer_type_decoder_f PostCrashSubCauseCodeV1_decode_oer;
oer_type_encoder_f PostCrashSubCauseCodeV1_encode_oer;
per_type_decoder_f PostCrashSubCauseCodeV1_decode_uper;
per_type_encoder_f PostCrashSubCauseCodeV1_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PostCrashSubCauseCodeV1_H_ */
#include "asn_internal.h"
