
extern zend_class_entry *zendframework_servicemanager_servicelocatorinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_ServiceManager_ServiceLocatorInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_servicemanager_servicelocatorinterface_get, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_servicemanager_servicelocatorinterface_has, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zendframework_servicemanager_servicelocatorinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_ServiceManager_ServiceLocatorInterface, get, arginfo_zendframework_servicemanager_servicelocatorinterface_get)
	PHP_ABSTRACT_ME(ZendFramework_ServiceManager_ServiceLocatorInterface, has, arginfo_zendframework_servicemanager_servicelocatorinterface_has)
  PHP_FE_END
};