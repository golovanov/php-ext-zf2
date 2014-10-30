/*

This file is part of the php-ext-zendframework package.

For the full copyright and license information, please view the LICENSE
file that was distributed with this source code.

*/

namespace Zend\Authentication\Adapter\DbTable\Exception;

use Zend\Authentication\Adapter\Exception\InvalidArgumentException as AuthenticationAdapterInvalidArgumentException;

class InvalidArgumentException extends AuthenticationAdapterInvalidArgumentException implements ExceptionInterface
{
}