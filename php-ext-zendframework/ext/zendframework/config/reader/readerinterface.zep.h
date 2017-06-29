
extern zend_class_entry *zendframework_config_reader_readerinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Config_Reader_ReaderInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_config_reader_readerinterface_fromfile, 0, 0, 1)
	ZEND_ARG_INFO(0, filename)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_config_reader_readerinterface_fromstring, 0, 0, 1)
	ZEND_ARG_INFO(0, string)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zendframework_config_reader_readerinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Config_Reader_ReaderInterface, fromFile, arginfo_zendframework_config_reader_readerinterface_fromfile)
	PHP_ABSTRACT_ME(ZendFramework_Config_Reader_ReaderInterface, fromString, arginfo_zendframework_config_reader_readerinterface_fromstring)
  PHP_FE_END
};
