/*

This file is part of the php-ext-zendframework package.

For the full copyright and license information, please view the LICENSE
file that was distributed with this source code.

*/

namespace Zend\Permissions\Acl\Assertion\Exception;

use Zend\Permissions\Acl\Exception\ExceptionInterface as AclExceptionInterface;

class InvalidAssertionException extends \InvalidArgumentException implements AclExceptionInterface
{
}