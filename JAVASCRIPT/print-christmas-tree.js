const drawTree = (height) => {
    for (let i = 0; i < height; i++) {
      const stars = '*'.repeat(2 * i + 1);
      const spacesBefore = ' '.repeat(height - i - 1);
      console.log(spacesBefore + stars);
    }
};

drawTree(5);

/* output:
> "    *"
> "   ***"
> "  *****"
> " *******"
> "*********"
*/
