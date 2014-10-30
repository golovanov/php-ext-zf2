
extern zend_class_entry *zendframework_db_resultset_resultsetinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Db_ResultSet_ResultSetInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_db_resultset_resultsetinterface_initialize, 0, 0, 1)
	ZEND_ARG_INFO(0, dataSource)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zendframework_db_resultset_resultsetinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Db_ResultSet_ResultSetInterface, initialize, arginfo_zendframework_db_resultset_resultsetinterface_initialize)
	PHP_ABSTRACT_ME(ZendFramework_Db_ResultSet_ResultSetInterface, getFieldCount, NULL)
  PHP_FE_END
};