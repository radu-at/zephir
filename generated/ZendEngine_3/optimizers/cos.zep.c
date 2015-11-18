
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "math.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/math.h"


ZEPHIR_INIT_CLASS(Test_Optimizers_Cos) {

	ZEPHIR_REGISTER_CLASS(Test\\Optimizers, Cos, test, optimizers_cos, test_optimizers_cos_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Test_Optimizers_Cos, testInt) {

	zval _0;
	int a;
		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	
	ZVAL_UNDEF(&_0);


	a = 4;
	ZVAL_LONG(&_0, a);
	RETURN_DOUBLE(cos(a));

}

PHP_METHOD(Test_Optimizers_Cos, testVar) {

	zval _0;
	int a;
		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	
	ZVAL_UNDEF(&_0);


	a = 4;
	ZVAL_LONG(&_0, a);
	RETURN_DOUBLE(cos(a));

}

PHP_METHOD(Test_Optimizers_Cos, testIntValue1) {

	zval _0;
		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	
	ZVAL_UNDEF(&_0);


	ZVAL_LONG(&_0, 4);
	RETURN_DOUBLE(cos(4));

}

PHP_METHOD(Test_Optimizers_Cos, testIntValue2) {

	zval _0;
		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	
	ZVAL_UNDEF(&_0);


	ZVAL_LONG(&_0, 16);
	RETURN_DOUBLE(cos(16));

}

PHP_METHOD(Test_Optimizers_Cos, testIntParameter) {

	zval *a_param = NULL, _0;
	int a;
		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	
	ZVAL_UNDEF(&_0);

	zephir_fetch_params(0, 1, 0, &a_param);

	a = zephir_get_intval(a_param);


	ZVAL_LONG(&_0, a);
	RETURN_DOUBLE(cos(a));

}

PHP_METHOD(Test_Optimizers_Cos, testVarParameter) {

	zval *a, a_sub;
		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	
	ZVAL_UNDEF(&a_sub);

	zephir_fetch_params(0, 1, 0, &a);



	RETURN_DOUBLE(zephir_cos(a TSRMLS_CC));

}
