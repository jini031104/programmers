-- 코드를 작성해주세요
SELECT info.ITEM_ID, info.ITEM_NAME FROM ITEM_INFO as info, ITEM_TREE as tree
WHERE info.ITEM_ID = tree.ITEM_ID AND tree.PARENT_ITEM_ID IS NULL;