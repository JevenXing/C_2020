# Markdown 语法

1. ##### 标题
    >### 标题:"#_"
    >#### 标题:"##_"
    >###### 标题:"###_"
2. ##### Emphasis 文本强调：
    >*斜体:"\*_\*"* 
    >**加粗:"\*\*_\*\*"** 
    >***粗斜体:"\*\*\*_\*\*\*"***
3. ##### Lists 列表
    >* 无序列表
        * 子项
        * 子项
    >+ 无序列表
        + 子项
        + 子项
    >1. 有序列表
        1.子项
        2.子项
4. Links 连接
    > Inline-style 内嵌方式：
    [link](https://www.google.com "标题文本")

    >Reference-style 引用方式：
    [link][id]

    [id]: https://www.mozilla.org "标题文本"

    >Relative reference to a repository file 引用存储文件：
    [link text](../path/file/readme.text "title text")

    >[link text][]
    [link text]: http://www.reddit.com

    >Email 邮件：<example@example.com>

5. pic 图像
    >Inline-style 内嵌方式：
    ![alt text](https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png "title text")
 
    >Reference-style 引用方式：
    ![alt text][logo]

    [logo]:https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png "title text"

6. ##### 代码和语法高亮
>标记一小段行内代码：`Markdown`
 
>如果高亮的内容包含\`号，可以这样写：    `` `包裹起来` ``
    
>语法高亮：
```html
    <div>Syntax Highlighting</div>
```
```css
    body{font-size:12px}
```
 
```javascript
    var s = "JavaScript syntax highlighting";
    alert(s);
```
```php
    <?php
      echo "hello, world!";
    ?>
```
```python
    s = "Python syntax highlighting"
    print s
```
```c
    void sgring(){
        return 0;
    }
```
```cpp
    #include <stdio.h>
    int main(){
        int dada=100;
    }
```
7. ##### Block Code 代码分组(代码区块)：

    >在该行开头缩进4个空格或一个制表符(tab)

        <strong>Blockquotes 引用：</strong>
        >Email-style angle brackets
        > are used for blockquotes.
        > > And, they can be nested.
        > #### Headers in blockquotes
        > * You can quote a list.
        > * Etc.

>Hard Line Breaks 换行：在一行的结尾处加上2个或2个以上的空格，也可以使用<\/br>标签

>第一行文字</br>
    第二行文字

8. #### Horizontal Rules 水平分割线：

***
* * *
- - -