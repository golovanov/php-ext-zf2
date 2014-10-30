/*

This file is part of the php-ext-zendframework package.

For the full copyright and license information, please view the LICENSE
file that was distributed with this source code.

*/

namespace Zend\Di\Definition\Annotation;

use Zend\Code\Annotation\AnnotationInterface;

/**
* Annotation for instantiator
*/
class Instantiator implements AnnotationInterface
{
    /**
     * @var mixed
     */
    protected content;

    /**
     * {@inheritDoc}
     */
    public function initialize(string content) -> void
    {
        let this->content = content;
    }
}
