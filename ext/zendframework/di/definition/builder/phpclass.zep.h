
extern zend_class_entry *zendframework_di_definition_builder_phpclass_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Di_Definition_Builder_PhpClass);

PHP_METHOD(ZendFramework_Di_Definition_Builder_PhpClass, setName);
PHP_METHOD(ZendFramework_Di_Definition_Builder_PhpClass, getName);
PHP_METHOD(ZendFramework_Di_Definition_Builder_PhpClass, setInstantiator);
PHP_METHOD(ZendFramework_Di_Definition_Builder_PhpClass, getInstantiator);
PHP_METHOD(ZendFramework_Di_Definition_Builder_PhpClass, addSuperType);
PHP_METHOD(ZendFramework_Di_Definition_Builder_PhpClass, getSuperTypes);
PHP_METHOD(ZendFramework_Di_Definition_Builder_PhpClass, addInjectionMethod);
PHP_METHOD(ZendFramework_Di_Definition_Builder_PhpClass, createInjectionMethod);
PHP_METHOD(ZendFramework_Di_Definition_Builder_PhpClass, setMethodBuilder);
PHP_METHOD(ZendFramework_Di_Definition_Builder_PhpClass, getMethodBuilder);
PHP_METHOD(ZendFramework_Di_Definition_Builder_PhpClass, getInjectionMethods);
PHP_METHOD(ZendFramework_Di_Definition_Builder_PhpClass, __construct);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_di_definition_builder_phpclass_setname, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_di_definition_builder_phpclass_setinstantiator, 0, 0, 1)
	ZEND_ARG_INFO(0, instantiator)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_di_definition_builder_phpclass_addsupertype, 0, 0, 1)
	ZEND_ARG_INFO(0, superType)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_di_definition_builder_phpclass_addinjectionmethod, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, injectionMethod, ZendFramework\\Di\\Definition\\Builder\\InjectionMethod, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_di_definition_builder_phpclass_createinjectionmethod, 0, 0, 0)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_di_definition_builder_phpclass_setmethodbuilder, 0, 0, 1)
	ZEND_ARG_INFO(0, className)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zendframework_di_definition_builder_phpclass_method_entry) {
	PHP_ME(ZendFramework_Di_Definition_Builder_PhpClass, setName, arginfo_zendframework_di_definition_builder_phpclass_setname, ZEND_ACC_PUBLIC)
	PHP_ME(ZendFramework_Di_Definition_Builder_PhpClass, getName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ZendFramework_Di_Definition_Builder_PhpClass, setInstantiator, arginfo_zendframework_di_definition_builder_phpclass_setinstantiator, ZEND_ACC_PUBLIC)
	PHP_ME(ZendFramework_Di_Definition_Builder_PhpClass, getInstantiator, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ZendFramework_Di_Definition_Builder_PhpClass, addSuperType, arginfo_zendframework_di_definition_builder_phpclass_addsupertype, ZEND_ACC_PUBLIC)
	PHP_ME(ZendFramework_Di_Definition_Builder_PhpClass, getSuperTypes, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ZendFramework_Di_Definition_Builder_PhpClass, addInjectionMethod, arginfo_zendframework_di_definition_builder_phpclass_addinjectionmethod, ZEND_ACC_PUBLIC)
	PHP_ME(ZendFramework_Di_Definition_Builder_PhpClass, createInjectionMethod, arginfo_zendframework_di_definition_builder_phpclass_createinjectionmethod, ZEND_ACC_PUBLIC)
	PHP_ME(ZendFramework_Di_Definition_Builder_PhpClass, setMethodBuilder, arginfo_zendframework_di_definition_builder_phpclass_setmethodbuilder, ZEND_ACC_PUBLIC)
	PHP_ME(ZendFramework_Di_Definition_Builder_PhpClass, getMethodBuilder, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ZendFramework_Di_Definition_Builder_PhpClass, getInjectionMethods, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(ZendFramework_Di_Definition_Builder_PhpClass, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
  PHP_FE_END
};
