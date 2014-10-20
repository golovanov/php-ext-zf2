/*
* This file is part of the php-ext-zf2 package.
*
* For the full copyright and license information, please view the LICENSE
* file that was distributed with this source code.
*/

namespace Zend\Stdlib;

/**
 * Serializable version of SplStack
 */
class SplStack extends \SplStack implements \Serializable
{
    /**
     * Serialize to an array representing the stack
     *
     * @return array
     */
    public function toArray() -> array
    {
        var item;
        array data = [];

        for item in this {
            let data[] = item;
        }
        return data;
    }

    /**
     * Serialize
     *
     * @return string
     */
    public function serialize() -> string
    {
        string serialized;
        array data;

        let data = this->toArray();
        let serialized = serialize(data);

        return serialized;
    }

    /**
     * Unserialize
     *
     * @param  string $data
     * @return void
     */
    public function unserialize(string data) -> void
    {
        var unserialized, item;

        let unserialized = unserialize(data);

        for item in unserialized {
            this->unshift(item);
        }
    }

}
